@class NSString;

@interface _ICQPageSpecification : NSObject

@property (retain, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) NSString *pageTitle;
@property (nonatomic) BOOL hasCancelButtonForBack;
@property (retain, nonatomic) NSString *pageClassIdentifier;

- (void).cxx_destruct;
- (id)copyWithBindings:(id)a0;
- (id)debugDescription;

@end
