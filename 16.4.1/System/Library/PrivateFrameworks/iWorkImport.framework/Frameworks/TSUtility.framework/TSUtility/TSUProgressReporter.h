@class NSProgress, NSString;

@interface TSUProgressReporter : NSObject <NSProgressReporting> {
    NSProgress *_progress;
}

@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTotalUnitCount:(long long)a0;
- (void).cxx_destruct;

@end
