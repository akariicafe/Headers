@class NSString;

@interface MKPlaceEncyclopedicTextItem : NSObject <MKPlaceEncyclopedicRowViewItem>

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textItemWithLabel:(id)a0 value:(id)a1;

- (void).cxx_destruct;

@end
