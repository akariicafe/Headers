@class NSString, NSArray;

@interface MNTracePlaybackDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long eventType;
@property (copy, nonatomic) NSString *tracePath;
@property (nonatomic) double traceDuration;
@property (nonatomic) double currentPosition;
@property (retain, nonatomic) NSArray *bookmarks;
@property (nonatomic) unsigned long long recordedBookmarkID;
@property (copy, nonatomic) NSString *pedestrianTracePath;
@property (nonatomic) double pedestrianTraceStartRelativeTimestamp;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
