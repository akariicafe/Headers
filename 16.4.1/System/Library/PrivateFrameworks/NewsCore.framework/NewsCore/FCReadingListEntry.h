@class NSString, NSDate;

@interface FCReadingListEntry : NSObject {
    NSString *_identifier;
    NSString *_articleID;
    NSDate *_dateAdded;
    unsigned long long _origin;
}

- (void).cxx_destruct;

@end
