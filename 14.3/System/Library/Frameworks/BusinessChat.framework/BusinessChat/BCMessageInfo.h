@class NSString, UIImage, NSDictionary;

@interface BCMessageInfo : NSObject <BSDescriptionProviding, BCDictionaryImageSerializable>

@property (nonatomic) NSString *_style;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *alternateTitle;
@property (retain, nonatomic) NSString *imageIdentifier;
@property (retain, nonatomic) NSString *imageDescription;
@property (readonly, nonatomic) NSString *style;
@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithDictionary:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 style:(id)a2 alternateTitle:(id)a3 imageIdentifier:(id)a4 imageDescription:(id)a5;
- (id)initWithDictionary:(id)a0 imageDictionary:(id)a1;

@end
