@class NSString;

@interface WBSHistoryServiceVisit : WBSHistoryServiceObject

@property (readonly, nonatomic) long long itemID;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double visitTime;
@property (readonly, nonatomic) BOOL loadSuccessful;
@property (readonly, nonatomic) BOOL httpNonGet;
@property (readonly, nonatomic) BOOL synthesized;
@property (nonatomic) long long redirectSource;
@property (nonatomic) long long redirectDestination;
@property (nonatomic) long long origin;
@property (nonatomic) long long generation;
@property (nonatomic) long long attributes;
@property (nonatomic) int score;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDatabaseID:(long long)a0 serviceVisit:(id)a1;
- (id)initWithVisit:(id)a0;
- (id)visitWithUpdatedID:(long long)a0 updatedItemID:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithSQLRow:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
