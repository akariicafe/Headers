@class NSString, WFImage;

@interface WFTextTokenChooserButton : NSObject

@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) long long style;
@property (nonatomic) BOOL isPossibleValue;
@property (nonatomic) BOOL preferAttributedStringRepresentation;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) WFImage *image;
@property (readonly, copy, nonatomic) id /* block */ handler;

+ (id)buttonWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 handler:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 handler:(id /* block */)a3;
- (id)alertButtonRepresentation;

@end
