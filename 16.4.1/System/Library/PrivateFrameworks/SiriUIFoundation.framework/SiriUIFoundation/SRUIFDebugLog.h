@class NSData, NSString;

@interface SRUIFDebugLog : NSObject

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)logWithData:(id)a0 mimeType:(id)a1 name:(id)a2 attemptCompression:(BOOL)a3;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 mimeType:(id)a1 name:(id)a2 attemptCompression:(BOOL)a3;

@end
