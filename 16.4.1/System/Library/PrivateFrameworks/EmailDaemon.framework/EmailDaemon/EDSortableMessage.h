@class NSString, EMObjectID, NSDate;

@interface EDSortableMessage : EMObject <EDSortableMessage>

@property (readonly) NSDate *displayDate;
@property (readonly, copy, nonatomic) EMObjectID *objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 displayDate:(id)a1;

@end
