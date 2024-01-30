@class NSString, NSAttributedString;

@interface HKInfographicContentItem : NSObject <HKInfographicItem>

@property (retain, nonatomic) NSAttributedString *titleString;
@property (retain, nonatomic) NSAttributedString *descriptionString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 description:(id)a1;

@end
