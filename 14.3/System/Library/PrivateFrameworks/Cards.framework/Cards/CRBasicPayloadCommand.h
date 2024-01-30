@class NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

@interface CRBasicPayloadCommand : NSObject <CRPayloadCommand>

@property (retain, nonatomic) id<NSSecureCoding, NSCopying> payload;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long commandDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
