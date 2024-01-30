@class HKTitleDetailOptionalButtonView;

@interface HKInfographicTitleDetailOptionalButtonCell : UITableViewCell {
    HKTitleDetailOptionalButtonView *_titleDetailOptionalButtonView;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)populateWithTitle:(id)a0 detail:(id)a1 buttonText:(id)a2 buttonAction:(id /* block */)a3;

@end
