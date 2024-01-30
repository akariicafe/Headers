@class NSString;

@interface IMMessagePartHighlightChatItem : IMMessageChatItem

@property (readonly, nonatomic) struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; float x2; float x3; float x4; float x5; float x6; } geometryDescriptor;
@property (readonly, nonatomic) unsigned long long highlightedMessagePartIndex;
@property (readonly, nonatomic) NSString *highlightedMessagePartGUID;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightedMessagePartRange;
@property (readonly, nonatomic) BOOL highlightedMessageIsFromMe;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 highlightedMessagePartGUID:(id)a1 highlightedMessagePartIndex:(long long)a2 highlightedMessagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

@end
