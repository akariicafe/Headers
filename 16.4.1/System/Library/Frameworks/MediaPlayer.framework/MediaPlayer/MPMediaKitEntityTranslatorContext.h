@class NSString;
@protocol MPMediaKitEntityRelationshipPayloadProvider;

@interface MPMediaKitEntityTranslatorContext : NSObject

@property (copy, nonatomic) NSString *personID;
@property (retain, nonatomic) id<MPMediaKitEntityRelationshipPayloadProvider> relationshipPayloadProvider;

- (void).cxx_destruct;

@end
