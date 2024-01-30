@class NSString;

@interface ATXStableContactRepresentation : NSObject

@property (readonly, nonatomic) NSString *stableContactIdentifier;
@property (readonly, nonatomic) NSString *cnContactId;
@property (readonly, nonatomic) NSString *rawIdentifier;

- (void).cxx_destruct;
- (id)initWithStableContactIdentifier:(id)a0 cnContactId:(id)a1 rawIdentifier:(id)a2;

@end
