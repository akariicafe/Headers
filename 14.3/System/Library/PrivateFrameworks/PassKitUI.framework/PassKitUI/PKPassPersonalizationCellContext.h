@class NSString;

@interface PKPassPersonalizationCellContext : NSObject

@property (nonatomic) double minimumTextLabelWidth;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) BOOL bindTextToStringRepresentation;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ stringRepresentationBlock;
@property (copy, nonatomic) id /* block */ contactUpdateBlock;

- (void).cxx_destruct;

@end
