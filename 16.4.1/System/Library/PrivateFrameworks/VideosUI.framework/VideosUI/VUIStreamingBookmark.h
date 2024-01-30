@class NSNumber, NSDate;

@interface VUIStreamingBookmark : NSObject

@property (retain, nonatomic) NSNumber *absoluteResumeTime;
@property (retain, nonatomic) NSDate *absoluteBookmarkTimestamp;
@property (retain, nonatomic) NSNumber *relativeResumeTime;
@property (retain, nonatomic) NSDate *relativeBookmarkTimestamp;

- (void).cxx_destruct;
- (id)initWithAbsoluteResumeTime:(id)a0 absoluteTimestamp:(id)a1 relativeResumeTime:(id)a2 relativeBookmarkTimestamp:(id)a3;

@end
