@class NSDictionary, NSString;

@interface DEPublication : NSObject

@property (retain, nonatomic) NSDictionary *distributions;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *lastModified;
@property (nonatomic) BOOL disabled;

+ (id)dateToLastModified:(id)a0;
+ (BOOL)write:(id)a0 tag:(id)a1 date:(id)a2 disabled:(BOOL)a3 toURL:(id)a4 keyId:(unsigned long long)a5 privateKey:(id)a6;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDistributions:(id)a0 tag:(id)a1 lastModified:(id)a2 disabled:(BOOL)a3;
- (id)getPublicationId;

@end
