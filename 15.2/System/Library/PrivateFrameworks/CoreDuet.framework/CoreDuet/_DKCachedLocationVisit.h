@class NSString;

@interface _DKCachedLocationVisit : NSObject {
    double _entryTime;
    double _exitTime;
    NSString *_locationId;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
