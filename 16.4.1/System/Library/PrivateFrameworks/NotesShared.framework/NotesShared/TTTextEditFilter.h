@class NSSet, NSDate;

@interface TTTextEditFilter : NSObject <NSCopying>

@property (copy, nonatomic) NSSet *allowedUserIDs;
@property (copy, nonatomic) NSSet *allowedAttachmentIDs;
@property (nonatomic) BOOL allowsMissingTimestamps;
@property (nonatomic) BOOL allowsMissingUsers;
@property (copy, nonatomic) NSDate *fromDate;
@property (copy, nonatomic) NSDate *toDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
