@class NSString, NSSet;
@protocol FCFeedGroupInsertionDescriptor;

@interface FCPaidSubscriptionGroupEmitter : NSObject <FCFeedGroupEmitting>

@property (class, readonly, copy, nonatomic) NSString *groupEmitterIdentifier;

@property (copy, nonatomic) id<FCFeedGroupInsertionDescriptor> insertionDescriptor;
@property (readonly, copy, nonatomic) NSSet *emittableGroupTypes;
@property (readonly, nonatomic) BOOL shouldEmitContentInFavoritesOnlyMode;
@property (readonly, nonatomic) BOOL emitsSingletonGroups;
@property (readonly, nonatomic) BOOL emitsSingleRefreshSessionGroups;
@property (readonly, nonatomic) long long requiredForYouContentTypes;
@property (readonly, nonatomic) BOOL requiresHeavyweightContent;
@property (readonly, nonatomic) BOOL isRequiredByFollowingEmitters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
