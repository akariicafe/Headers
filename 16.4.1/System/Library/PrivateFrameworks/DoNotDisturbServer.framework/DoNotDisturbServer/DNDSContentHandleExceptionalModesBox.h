@class DNDContactHandle, NSArray;

@interface DNDSContentHandleExceptionalModesBox : NSObject

@property (readonly, copy, nonatomic) DNDContactHandle *contactHandle;
@property (readonly, copy, nonatomic) NSArray *allowed;
@property (readonly, copy, nonatomic) NSArray *silenced;

- (void).cxx_destruct;
- (id)initWithContactHandle:(id)a0 allowed:(id)a1 silenced:(id)a2;

@end
