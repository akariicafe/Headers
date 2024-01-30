@class NSString;

@interface HKInfographicButtonItem : NSObject <HKInfographicItem>

@property (retain, nonatomic) NSString *titleString;
@property (copy, nonatomic) id /* block */ didTapButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 didTapButton:(id /* block */)a1;

@end
