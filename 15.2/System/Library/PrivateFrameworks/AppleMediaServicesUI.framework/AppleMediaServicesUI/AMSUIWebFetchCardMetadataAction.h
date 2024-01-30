@class NSNumber, NSString;

@interface AMSUIWebFetchCardMetadataAction : AMSUIWebAction

@property (retain, nonatomic) NSNumber *cardArtworkSize;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *serialNumber;

- (void).cxx_destruct;
- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
