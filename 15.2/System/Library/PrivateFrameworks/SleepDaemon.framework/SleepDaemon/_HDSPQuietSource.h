@class NSString;
@protocol HDSPSource;

@interface _HDSPQuietSource : NSObject <HDSPSource>

@property (retain, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) id<HDSPSource> targetSource;
@property (nonatomic) BOOL dontNotify;
@property (nonatomic) BOOL dontSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
