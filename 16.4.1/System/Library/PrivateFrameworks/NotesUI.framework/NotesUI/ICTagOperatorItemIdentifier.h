@class NSString;
@protocol ICItemIdentifier;

@interface ICTagOperatorItemIdentifier : NSObject <ICItemIdentifier>

@property (class, readonly, nonatomic) ICTagOperatorItemIdentifier *sharedItemIdentifier;

@property (readonly, nonatomic) id<ICItemIdentifier> parentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
