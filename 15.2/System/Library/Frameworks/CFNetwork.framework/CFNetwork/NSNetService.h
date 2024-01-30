@class NSString, NSArray;
@protocol NSNetServiceDelegate;

@interface NSNetService : NSObject {
    id _netService;
    id _delegate;
    id _reserved;
}

@property id<NSNetServiceDelegate> delegate;
@property BOOL includesPeerToPeer;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *type;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSString *hostName;
@property (readonly, copy) NSArray *addresses;
@property (readonly) long long port;

+ (id)dictionaryFromTXTRecordData:(id)a0;
+ (id)dataFromTXTRecordDictionary:(id)a0;

- (void)resolve;
- (id)initWithCFNetService:(struct __CFNetService { } *)a0;
- (void)publishWithOptions:(unsigned long long)a0;
- (id)TXTRecordData;
- (BOOL)setTXTRecordData:(id)a0;
- (id)initWithDomain:(id)a0 type:(id)a1 name:(id)a2 port:(int)a3;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)description;
- (id)initWithDomain:(id)a0 type:(id)a1 name:(id)a2;
- (void)startMonitoring;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)_setIncludesAWDL:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)stopMonitoring;
- (unsigned long long)hash;
- (void)dealloc;
- (void)resolveWithTimeout:(double)a0;
- (BOOL)getInputStream:(out id *)a0 outputStream:(out id *)a1;
- (void)publish;
- (void)stop;

@end
