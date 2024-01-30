@class NSString;

@interface NTKMoreButtonListItem : NSObject <NTKComplicationItem>

@property (readonly, nonatomic) NSString *ntk_identifier;
@property (readonly, nonatomic) NSString *ntk_sectionIdentifier;
@property (readonly, nonatomic) unsigned long long ntk_itemType;
@property (readonly, nonatomic) NSString *ntk_contactIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSectionIdentifier:(id)a0;
- (id)ntk_localizedNameWithOptions:(unsigned long long)a0 forRichComplicationSlot:(BOOL)a1;

@end
