@class NSString, CNContact, NSDictionary, PXRecipient;
@protocol PXCMMPersonSuggestion;

@interface PXCMMComposeRecipient : NSObject <NSCopying, PXTapToRadar>

@property (readonly, nonatomic) PXRecipient *recipient;
@property (readonly, nonatomic) id<PXCMMPersonSuggestion> personSuggestion;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSDictionary *diagnosticDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecipient:(id)a0;
- (id)initWithPersonSuggestion:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
