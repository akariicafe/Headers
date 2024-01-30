@class NSString, PKPaymentSetupFieldPicker;
@protocol NSCopying;

@interface PKApplyMultilevelPickerRow : NSObject <PKApplyCollectionViewRow>

@property (readonly, nonatomic) PKPaymentSetupFieldPicker *picker;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
