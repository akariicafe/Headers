@class NSArray, NSMutableArray, CNPropertyGroupItem;
@protocol CNPropertyBestIDSValueQueryDelegate, CNCancelable;

@interface CNPropertyBestIDSValueQuery : NSObject

@property (retain, nonatomic) NSArray *propertyItems;
@property (retain, nonatomic) NSArray *idsHandles;
@property (retain, nonatomic) id<CNCancelable> idsLookupToken;
@property (retain, nonatomic) NSMutableArray *validIDSHandles;
@property (readonly, nonatomic) NSMutableArray *validIDSItems;
@property (readonly, nonatomic) CNPropertyGroupItem *bestIDSProperty;
@property (weak, nonatomic) id<CNPropertyBestIDSValueQueryDelegate> delegate;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithPropertyItems:(id)a0 service:(id)a1;
- (id)initWithPropertyItems:(id)a0 service:(id)a1 idsAvailabilityProvider:(id)a2 schedulerProvider:(id)a3;

@end
