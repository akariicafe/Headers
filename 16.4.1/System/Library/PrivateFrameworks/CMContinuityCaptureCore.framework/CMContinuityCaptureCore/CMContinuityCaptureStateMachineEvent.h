@class NSString;

@interface CMContinuityCaptureStateMachineEvent : NSObject

@property (readonly, retain) NSString *name;
@property (readonly) BOOL isEntry;
@property (readonly) id /* block */ action;
@property (retain) id data;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 isEntry:(BOOL)a1 eventAction:(id /* block */)a2;

@end
