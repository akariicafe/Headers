@class NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding, CRCard;

@interface CRNextCardCommand : CRBasicPayloadCommand <CRPayloadCommand>

@property (retain, nonatomic) id<CRCard> nextCard;
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
