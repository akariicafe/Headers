@class NSString;

@interface MPStoreContentReport : NSObject <NSCopying>

@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *contentID;
@property (nonatomic) long long concernItemType;
@property (copy, nonatomic) NSString *commentText;
@property (copy, nonatomic) NSString *aucType;
@property (copy, nonatomic) NSString *concernTypeID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
