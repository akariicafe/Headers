@class NSString, UIImage;

@interface _UIDocumentPickerAuxiliaryOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) unsigned long long order;
@property (nonatomic, getter=isNewlyAdded) BOOL newlyAdded;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
