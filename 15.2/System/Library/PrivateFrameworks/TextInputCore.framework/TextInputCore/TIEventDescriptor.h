@class NSString, NSArray;

@interface TIEventDescriptor : NSObject

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *eventDescription;
@property (readonly, nonatomic) NSArray *fieldDescriptors;
@property (readonly, nonatomic) BOOL includeTestingParameters;

+ (id)eventDescriptorWithEventName:(id)a0 eventDescription:(id)a1 fieldDescriptors:(id)a2 includeTestingParameters:(BOOL)a3;

- (void).cxx_destruct;
- (id)initWithEventName:(id)a0 eventDescription:(id)a1 fieldDescriptors:(id)a2 includeTestingParameters:(BOOL)a3;

@end
