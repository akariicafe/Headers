@class NSArray;

@interface FAInviteCompletionInfo : NSObject

@property (nonatomic) unsigned long long transportType;
@property (retain, nonatomic) NSArray *recipients;
@property (nonatomic) unsigned long long status;

- (id)_transportStringValue;
- (id)_completionStatusStringValue;
- (id)serverReadableDictionary;
- (void).cxx_destruct;

@end
