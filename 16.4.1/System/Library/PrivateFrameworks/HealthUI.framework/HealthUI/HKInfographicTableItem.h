@class NSString, NSAttributedString;

@interface HKInfographicTableItem : NSObject <HKInfographicItem>

@property (retain, nonatomic) NSAttributedString *titleString;
@property (retain, nonatomic) NSAttributedString *valueString;
@property (nonatomic) BOOL separatorHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 value:(id)a1;
- (id)initWithTitle:(id)a0 value:(id)a1 separatorHidden:(BOOL)a2;

@end
