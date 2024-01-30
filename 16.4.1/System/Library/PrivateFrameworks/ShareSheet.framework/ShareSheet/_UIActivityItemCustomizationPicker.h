@class NSArray, NSString;

@interface _UIActivityItemCustomizationPicker : _UIActivityItemCustomization <_UIActivityItemCustomizationPicker> {
    long long _selectedOptionIndex;
    long long _previousSelectedOptionIndex;
}

@property (copy, nonatomic, setter=_setHandler:) id /* block */ _handler;
@property (readonly, nonatomic) NSArray *_optionTitles;
@property (readonly, nonatomic) long long selectedOptionIndex;
@property (readonly, nonatomic) long long previousSelectedOptionIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 optionTitles:(id)a1 selectedOptionIndex:(long long)a2 footerText:(id)a3;
- (void)_setSelectedOptionIndex:(long long)a0;

@end
