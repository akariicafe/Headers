@class NSArray;

@interface FAInviteCompletionInfo : NSObject

@property (nonatomic) unsigned long long transportType;
@property (retain, nonatomic) NSArray *recipients;
@property (nonatomic) unsigned long long status;

- (void).cxx_destruct;
- (id)_transportStringValue;
- (id)_completionStatusStringValue;
- (id)serverReadableDictionary;

@end
