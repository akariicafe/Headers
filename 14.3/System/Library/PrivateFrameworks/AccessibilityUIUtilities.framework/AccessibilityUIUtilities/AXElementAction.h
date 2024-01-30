@class AXElement, NSString;

@interface AXElementAction : NSObject

@property (retain, nonatomic) AXElement *element;
@property (retain, nonatomic) NSString *customActionIdentifier;
@property (retain, nonatomic) id dragActivationToken;
@property (nonatomic) struct CGPoint { double x; double y; } dropPoint;
@property (nonatomic) unsigned long long medusaGesture;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long type;

- (void).cxx_destruct;

@end
