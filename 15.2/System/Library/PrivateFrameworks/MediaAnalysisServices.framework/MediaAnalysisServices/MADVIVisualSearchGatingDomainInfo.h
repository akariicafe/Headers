@class NSString;

@interface MADVIVisualSearchGatingDomainInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *glyphName;
@property (readonly, nonatomic) BOOL hasFocalPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } focalPoint;
@property (readonly, nonatomic) NSString *displayLabel;
@property (readonly, nonatomic) NSString *displayMessage;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 label:(id)a1 glyphName:(id)a2 hasFocalPoint:(BOOL)a3 focalPoint:(struct CGPoint { double x0; double x1; })a4 displayLabel:(id)a5 displayMessage:(id)a6;

@end
