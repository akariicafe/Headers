@interface DOMProgressEvent : DOMEvent

@property (readonly) BOOL lengthComputable;
@property (readonly) unsigned long long loaded;
@property (readonly) unsigned long long total;

@end
