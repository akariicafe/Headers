@class NSString;

@interface ATXRouteCacheKey : NSObject <NSCopying> {
    NSString *destinationLocation;
    NSString *transportType;
    BOOL localOnlyAfterFirstUpdate;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
