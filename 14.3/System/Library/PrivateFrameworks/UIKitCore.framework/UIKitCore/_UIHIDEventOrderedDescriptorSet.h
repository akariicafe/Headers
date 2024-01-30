@class NSMutableDictionary, NSMutableOrderedSet;

@interface _UIHIDEventOrderedDescriptorSet : NSObject <NSCopying> {
    NSMutableOrderedSet *_orderedDescriptors;
    NSMutableDictionary *_eventsByDescriptor;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
