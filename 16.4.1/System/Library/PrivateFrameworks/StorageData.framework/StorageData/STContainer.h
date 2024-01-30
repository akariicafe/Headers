@class NSURL, NSString;

@interface STContainer : NSObject <STContainer> {
    struct container_object_s { } *_container;
}

@property (readonly) NSURL *url;
@property (readonly) NSString *identifier;
@property (readonly) unsigned long long containerClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerWithIdentifier:(id)a0 containerClass:(unsigned long long)a1 personaUniqueString:(id)a2;
+ (id)containersWithClass:(unsigned long long)a0 personaUniqueString:(id)a1;

@end
