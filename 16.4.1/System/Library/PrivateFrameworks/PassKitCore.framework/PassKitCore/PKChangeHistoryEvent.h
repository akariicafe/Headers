@class NSString, NSDate;

@interface PKChangeHistoryEvent : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (nonatomic) long long recordType;
@property (retain, nonatomic) NSString *recordUniqueID;
@property (retain, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL representsPassAddition;
@property (readonly, nonatomic) BOOL representsPassUpdate;
@property (readonly, nonatomic) BOOL representsPassRemoval;
@property (readonly, nonatomic) BOOL representsCatalogUpdate;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 recordType:(long long)a1 recordUniqueID:(id)a2 timestamp:(id)a3;

@end
