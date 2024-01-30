@class NSString;

@interface _ICQPageSpecification : NSObject

@property (retain, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) NSString *pageTitle;
@property (nonatomic) BOOL hasCancelButtonForBack;
@property (retain, nonatomic) NSString *pageClassIdentifier;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)copyWithBindings:(id)a0;

@end
