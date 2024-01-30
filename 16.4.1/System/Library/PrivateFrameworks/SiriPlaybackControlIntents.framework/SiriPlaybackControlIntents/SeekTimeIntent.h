@class NSArray, NSNumber;

@interface SeekTimeIntent : INIntent

@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, retain) NSNumber *playheadPosition;
@property (nonatomic, retain) NSNumber *shouldStartPlaybackAfterSeek;
@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic, retain) NSNumber *isSkipToEnd;
@property (nonatomic) long long mediaType;
@property (nonatomic, copy) NSArray *deviceQueries;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
