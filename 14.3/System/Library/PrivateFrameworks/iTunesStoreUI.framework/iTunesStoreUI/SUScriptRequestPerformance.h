@class NSString, ISURLRequestPerformance;

@interface SUScriptRequestPerformance : SUScriptObject {
    ISURLRequestPerformance *_performance;
}

@property (readonly) double finishInterval;
@property (readonly) NSString *JSONHeaders;
@property (readonly) double receivedResponseInterval;
@property (readonly) double renderBeginInterval;
@property (readonly) double renderEndInterval;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)initWithRequestPerformance:(id)a0;

@end
