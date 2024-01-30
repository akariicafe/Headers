@class NSError, NSData, NSString;

@interface SSPlayInfoResponse : NSObject <SSXPCCoding, NSCopying>

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSData *playInfoData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)initWithPlayInfoData:(id)a0 error:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
