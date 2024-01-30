@class HAP2TLVParamServiceList, NSString;

@interface HAP2TLVOldServiceList : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAP2TLVParamServiceList *serviceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithServiceList:(id)a0;

@end
