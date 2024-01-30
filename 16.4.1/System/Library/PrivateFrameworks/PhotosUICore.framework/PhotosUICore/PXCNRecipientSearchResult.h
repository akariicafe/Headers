@class NSString;

@interface PXCNRecipientSearchResult : PXCNComposeRecipient <PXRecipientSearchResult>

@property (nonatomic) long long validationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
