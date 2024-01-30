@class NSString;

@interface DSThermalLogLine : DSLogLine

@property (retain, nonatomic) NSString *eventType;
@property (nonatomic) float maxTemp;
@property (readonly, nonatomic) BOOL isTrapEvent;
@property (readonly, nonatomic) BOOL isTrapEntry;

- (void).cxx_destruct;
- (id)initWithLogLine:(id)a0;

@end
